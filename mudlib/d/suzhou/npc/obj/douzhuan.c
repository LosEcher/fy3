// jinchuang.c ��ҩ

#include <ansi.h>
inherit ITEM;



void create()
{
	set_name("��ת����Ҫ��",({"douzhuan","shu","book"}));
	set("unit","��");
	set("long","һ�������š��Ա�֮����ʩ�������ؼ���\n");
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
	if (!id(arg))
	return 0;
	if(me->query_skill("murongquanfa",1)<80||!me->query_skill("murongquanfa",1))
	{
	tell_object(me,"��ġ�Ľ��ȭ����������������û�����򡸶�ת���ơ��ء�\n");
	return 1;
	}
	k=me->query("oldsix_flag/douzhuan");
	if(!k||k==0)	k=3;
	if(k==10)	
	{
	tell_object(me,"��ġ���ת���ơ��Ѵﵽ��߾��磬���о���Ҳû������\n");
		return 1;
	}
	message_vision("$N����ϸר�С���ת���ơ��񹦡�\n",me);
	if(me->query_int()<24+(k-2)*3)
	{
	tell_object(me,"���㵱ǰ��������������������ġ���ת���ơ��񹦡�\n");
		return 1;
	}
	if(random(me->query_kar())<25)
	{
	tell_object(me,"�����ԡ���ת���ơ���������⣬���ֲ��ҿ϶���\n");
		return 1;
	}
	tell_object(me,CYN"��ġ���ת���ơ��񹦽����ˣ�\n"NOR);
	k=k+1;
	me->set("oldsix_flag/douzhuan",k);
	return 1;
}
