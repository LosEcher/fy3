// jinchuang.c ��ҩ

#include <ansi.h>
inherit ITEM;



void create()
{
	set_name("�κ�ָҪ��",({"canhezhi","shu","book"}));
	set("unit","��");
	set("long","һ�������š��κ�ָ��ָ����С���ӡ�\n");
	set("no_drop",1);
	set("no_get",1);
	setup();
}
void init()
{
	add_action("do_study","study");
	add_action("do_study","du");
}
int do_study(string arg)
{
	int k;
	object me;
	me=this_player();
	if( !living(me))	return 0;
	if (!id(arg))
	return 0;
	if(me->query_skill("murongquanfa",1)<40||!me->query_skill("murongquanfa",1))
	{
	tell_object(me,"��ġ�Ľ��ȭ����������������û�����򡸲κ�ָ���ء�\n");
	return 1;
	}
	k=me->query("oldsix_flag/canhezhi");
	if(!k||k==0)	k=3;
	if(k==10)	
	{
	tell_object(me,"��ġ��κ�ָ���Ѵﵽ��߼��ˣ����о���Ҳû������\n");
		return 1;
	}
	message_vision("$N����ϸר�С��κ�ָ��ָ����\n",me);
	if(me->query_int()<24+(k-2)*3)
	{
	tell_object(me,"���㵱ǰ��������������������ġ��κ�ָ��ָ����\n");
		return 1;
	}
	if(random(me->query_kar())<25)
	{
	tell_object(me,"�����ԡ��κ�ָ��������⣬���ֲ��ҿ϶���\n");
		return 1;
	}
	tell_object(me,CYN"��ġ��κ�ָ���ȼ�����ˣ�\n"NOR);
	k=k+1;
	 me->set("oldsix_flag/canhezhi",k);
	return 1;
}
