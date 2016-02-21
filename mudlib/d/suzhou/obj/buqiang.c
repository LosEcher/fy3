#include <ansi.h>
inherit ITEM;
void create()
{
	set_name("�ѻ���ǹ",({"zhuji buqiang","buqiang","qiang"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("material","iron");
		set("long","shoot [����] <Ŀ��>�����Ϊ02��\n");
	}
	setup();
}
void init()
{
	add_action("do_shoot","shoot");
}
int do_shoot(string str)
{
	object me,target,room;
	string dir,name;
	me=this_player();
	if(!str)
	return notify_fail("shoot [����] <����>\n");
	if(sscanf(str,"%s %s",dir,name)==2)  {
		if(!environment(me)->query("exits/"+dir))
		return notify_fail("û���������\n");
		if(!room=find_object(environment(me)->query("exits/"+dir)))
		room=load_object(environment(me)->query("exits/"+dir));
	}
	else	{
		name=str;
		room=environment(me);
	}
		target=present(name,room);
		if(!target)	return notify_fail("�Ƕ�û�����Ŀ�꣡\n");
		if(!target->is_character())	return notify_fail("�ǲ��Ǹ����\n");
		tell_room(environment(me),RED"��ž����һ��ǹ�죬�ӵ�����"+target->query("name")+"��Х��ȥ��\n"NOR);
		message_vision(RED"�ӵ���Х�������������֮��$N����Ѫ��֮�У�\n"NOR,target);
		target->die();
		return 1;
}
