// give.c
#include <ansi.h>
//modify by jackyboy @cctx 98/12/29 for quest type "Ѱ" & "��"
#define CMDS_NICK "/cmds/usr/nick"
inherit F_CLEAN_UP;

int do_give(object me, object obj, object who);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	string target, item;
	object obj, who, *inv, obj2;
	int i, amount;

	if(!arg) return notify_fail("��Ҫ��˭ʲô������\n");

	if( sscanf(arg, "%s to %s", item, target)==2
	|| sscanf(arg, "%s %s", target, item)==2 );
	else return notify_fail("��Ҫ��˭ʲô������\n");

	if(!objectp(who = present(target, environment(me))) || !living(who))
		return notify_fail("����û������ˡ�\n");

	if(sscanf(item, "%d %s", amount, item)==2) {
		if( !objectp(obj = present(item, me)) )	
			return notify_fail("������û������������\n");
		if( obj->query("no_drop") )
			return notify_fail("�����������������ˡ�\n");
		if( !obj->query_amount() )	
			return notify_fail( obj->name() + "���ܱ��ֿ����ˡ�\n");
		if( amount < 1 )
			return notify_fail("����������������һ����\n");
		if( amount > obj->query_amount() ) 
			return notify_fail("��û����ô���" + obj->name() + "��\n");
		else if( amount == (int)obj->query_amount() )
			return do_give(me, obj, who);
		else {
			obj->set_amount( (int)obj->query_amount() - amount );
			obj2 = new(base_name(obj));
			obj2->set_amount(amount);
			if (do_give(me, obj2, who))
				return 1;
			else {
				obj->set_amount((int)obj->query_amount() + amount);
				return 0;
			}
		}
	}

	if(arg=="all") {
		inv = all_inventory(me);
		for(i=0; i<sizeof(inv); i++) {
			do_give(me, inv[i], who);
		}
		write("Ok.\n");
		return 1;
	}

	if(!objectp(obj = present(item, me)))
		return notify_fail("������û������������\n");
	return do_give(me, obj, who);
}

int do_give(object me, object obj, object who)
{
	mapping quest;
	int exp, pot, score, bonus,factor;
/*
	write("��ʼ�ж��Ƿ�������:\n");
	(interactive(me))?write("interactive(me) is 1\n"):write("interactive(me) is 0\n");
	(quest=me->query("quest"))?write("quest query ok!\n"):write("quest query fail!\n");
	(me->query("task_time")>=time())?write("time enough!\n"):write("time not enough!\n");
	(quest["quest_type"]=="Ѱ"||quest["quest_type"]=="��")?
		write("quest type is not kill!\n"):write("quest type is kill!\n");
	(quest["quest_obj_name"]==obj->query("name"))?write("obj name match!\n")
		:write("obj name is not match!\n");
	(obj->id(quest["quest_obj_id"]))?write("obj id match!\n"):write("obj id not match!\n");
	(quest["quest_npc_name"]==who->query("name"))?write("npc name match!\n")
		:write("npc name is not match!\n");
	(who->id(quest["quest_npc_id"]))?write("npc id match!\n"):write("npc id not match!\n");
*/
//����������ж�Ѱ���͵�������ɽ���
//quest program begain....
//���жϵ�ʱ������ֽ�����ANSI��ɫ����ȥ���������Ƕ�id()��name()���޷�����
	if(
		interactive(me) 
		&& (quest = me->query("quest"))
		&& (me->query("task_time") >= time())
		&&(quest["quest_type"]=="Ѱ"||quest["quest_type"]=="��")
		&&(quest["quest_obj_name"]==CMDS_NICK->replace_color(obj->query("name"),0))
		&&(obj->id(quest["quest_obj_id"]))
		&&(quest["quest_npc_name"]==CMDS_NICK->replace_color(who->query("name")))
		&&who->id(quest["quest_npc_id"])
	)
	{
		if( obj->move(who) ) 
		{
			printf("���%sһ%s%s��\n", who->name(), obj->query("unit"),
				obj->name());
			message("vision", sprintf("%s����һ%s%s��\n", me->name(),
				obj->query("unit"), obj->name()), who );
			message("vision", sprintf("%s��%sһ%s%s��\n", me->name(), who->name(),
				obj->query("unit"), obj->name()), environment(me), ({me, who}) );
			me->save();
			destruct(obj);
		}
		else 
			return 0;
		tell_object(me,"��ϲ�㣡���������һ������\n");
		exp = quest["exp"]/2 + random(quest["exp"]/2);
		pot = quest["pot"]/2 + random(quest["pot"]/2);
		score = quest["shen"]/2 + random(quest["shen"]/2);
		exp=(exp==0)?1:exp;
		pot=(pot==0)?1:pot;
		score=(score==0)?1:score;
		factor=who->query("quest_factor");
		if (factor)
		{
			exp=exp*factor/10;
			pot=pot*factor/10;
			score=score*factor/10;
		}
		bonus = (int) me->query("combat_exp");
		bonus += exp;
		me->set("combat_exp", bonus);
		bonus = (int) me->query("potential");
		bonus = bonus + pot;//����Ǳ������������only in quest system!
		//if( bonus > 100) bonus = 100;
		me->set("potential", bonus );
		bonus = (int)me->query("shen");
		if(bonus >= 0)
			bonus += score;
		else
			bonus -= score;
		me->set("shen", bonus);
		tell_object(me,HIW"�㱻�����ˣ�\n" +
	       	chinese_number(exp) + "��ʵս����\n"+
      			chinese_number(pot) + "��Ǳ��\n" +
	       	chinese_number(score)+"����\n"
			NOR	);
		me->set("quest", 0 );
		return 1;
	}
//quest program end!

	if( obj->query("no_drop") )
		return notify_fail("�����������������ˡ�\n");
	if( !interactive(who) && !who->accept_object(me, obj) )
		return notify_fail("�Է��������������Ķ�����\n");
	if( who->query("env/no_accept"))
		return notify_fail("�Է����ڲ����ܱ��˵�������\n");

	if( !userp(who)&& obj->value() ) {
		message_vision("$N�ó�" + obj->short() + "��$n��\n", me, who);
		destruct(obj);
		me->save();
		return 1;
	} else if( obj->move(who) ) {
		printf("���%sһ%s%s��\n", who->name(), obj->query("unit"),
			obj->name());
		message("vision", sprintf("%s����һ%s%s��\n", me->name(),
			obj->query("unit"), obj->name()), who );
		message("vision", sprintf("%s��%sһ%s%s��\n", me->name(), who->name(),
			obj->query("unit"), obj->name()), environment(me), ({me, who}) );
		me->save();
		return 1;
	}
	else return 0;
}
int help(object me)
{
write(@HELP
ָ���ʽ : give <��Ʒ����> to <ĳ��>
      �� : give <ĳ��> <��Ʒ����>
 
���ָ��������㽫ĳ����Ʒ������, ��Ȼ, ������Ҫӵ��������Ʒ.
 
HELP
    );
    return 1;
}
