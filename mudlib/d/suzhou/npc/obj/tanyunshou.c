// jinchuang.c ��ҩ

#include <ansi.h>
inherit ITEM;



void create()
{
	set_name("̽����Ҫ��",({"tanyunshou","shu","book"}));
	set("unit","��");
	set("long","һ�������š�̽���֡��ַ���С���ӡ�\n");
//        set("no_drop",1);
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
	if(me->query_skill("murongquanfa",1)<20||!me->query_skill("murongquanfa",1))
	{
	tell_object(me,"��ġ�Ľ��ȭ����������������û������̽���֡��ء�\n");
	return 1;
	}
	k=me->query("oldsix_flag/tanyunshou");
	if(!k||k==0)	k=3;
	if(k==10)	
	{
		tell_object(me,"��ġ�̽���֡��Ѵﵽ��߼��ˣ����о���Ҳû������\n");
		return 1;
	}
	message_vision("$N����ϸר�С�̽���֡��ַ���\n",me);
	if(me->query_int()<24+(k-2)*3)
	{
		tell_object(me,"���㵱ǰ��������������������ġ�̽���֡��ַ���\n");
		return 1;
	}
	if(random(me->query_kar())<25)
	{
		tell_object(me,"�����ԡ�̽���֡�������⣬���ֲ��ҿ϶���\n");
		return 1;
	}
	tell_object(me,CYN"��ġ�̽���֡��ȼ�����ˣ�\n"NOR);
	k=k+1;
	me->set("oldsix_flag/tanyunshou",k);
	return 1;
}
