// marry_card.c
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("���֤��", ({"jiehunzheng","marrycard","jiehun zheng","zheng"}) );
        set_weight(10);
        set("no_get",1);
        set("no_steal",1);
        set("no_drop","��Ľ��֤���ܶ���,ֻ��ȥ���ð���顣\n");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "paper");
		set("long","����֮�����ͨ���Ȿ���֤ʹ��ct��ceָ���������\n");
        }
}

void init()
{
        add_action("do_coupletalk", "ct");
        add_action("do_cemote", "ce" );
}

int do_cemote(string arg)
{
        object me;
        object couple_ob;
        string target, tmpstr1, tmpstr2,str1,str2;

        me = this_player();

        target=(string)query("marry_id");
        if( !target)
		return notify_fail("���������Ž��֤�����⣬�����Լ��İɡ�\n");

        couple_ob = find_player(target);
        if( !couple_ob )
                return
        notify_fail("��İ��������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
        if( (string)couple_ob->query("marry/id")!= me->query("id"))
		return notify_fail("����˲�����ԭ������ż�ˣ�ȥ�����ɡ�\n");

        if ((string)couple_ob->query("gender") != "Ů��") {
                tmpstr1 = "����"; tmpstr2 = "�Ϲ�";
                str1 = "��"; str2 = "��";
        } else {
                tmpstr1 = "�Ϲ�"; tmpstr2 = "����";
                str1 = "��"; str2 = "��";
        }

        if (!arg) {
                write( MAG "���������������İ����ˡ�\n" NOR);
                tell_room(environment(me), CYN+(string)me->name()+
                "�����������"+str1+"�İ���"+ (string)couple_ob->name()+
                "�ˡ�\n" +NOR, ({me, couple_ob}));
                tell_object(couple_ob, sprintf(MAG "%s %s ���������������\n"NOR, tmpstr1,me->name(1) )); 

                return 1;
        }
        if (environment(me) == environment(couple_ob ) ) {       
           if (arg == "kiss") {
              write( MAG "��ӵס��İ��£������һ�ǣ����...���...\n" NOR);
              tell_room(environment(me), CYN+(string)me->name()+
              "ӵס"+(string)couple_ob->name()+"�������һ�ǡ�\n" 
                +NOR, ({me, couple_ob}));
                tell_object(couple_ob, sprintf(MAG "%s %s ӵס�㣬�����һ�ǣ����...���...\n"NOR,tmpstr1,me->name(1) 
));               }         
        }                 

        return 1;
}


int do_coupletalk(string arg)
{
        object me;
        object couple_ob;
        string target, tmpstr1, tmpstr2;

        me = this_player();
        target=(string)query("marry_id");
        if( !target)
		return notify_fail("���������Ž��֤�����⣬�����Լ��İɡ�\n");

        couple_ob = find_player(target);
        if( !couple_ob )
                return 
        notify_fail("��İ��������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
        if( (string)couple_ob->query("marry/id")!= me->query("id"))
		return notify_fail("����˲�����ԭ������ż�ˣ�ȥ�����ɡ�\n");
        if ((string)couple_ob->query("gender") != "Ů��") {
                tmpstr1 = "����";
                tmpstr2 = "�Ϲ�";
        } else {
                tmpstr1 = "�Ϲ�";
                tmpstr2 = "����";
        }

        write(sprintf(MAG"���%s %s ˵��%s\n"NOR,
                tmpstr2,couple_ob->name(1), arg ));
        tell_object(couple_ob, sprintf(MAG "%s %s ����˵��%s\n"NOR, 
               tmpstr1,me->name(1), arg ));

        return 1;
}

int query_autoload()
{
	return 1;
}

void autoload(string arg)
{
	object me=this_player();
	string id,name;
	name=(string)me->query("marry/name");
	id=(string)me->query("marry/id");
	if( !name || !id)	destruct(this_object());
	else	{
		set("name","���"+name+"("+id+")�Ľ��֤");
		set("marry_id",id);
		set("marry_name",name);
	}
	return;
}

void owner_is_killed()	{ destruct(this_object()); }