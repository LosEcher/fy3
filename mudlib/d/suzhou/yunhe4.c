// Room: /d/suzhou/yunhe4.c

inherit ROOM;

void create()
{
	set("short", "�˺�");
	set("long", @LONG
̧ͷ��������ˮ��һɫ������ͨ�����ݵķ�����������Լ�ɼ����ݳǽǣ�
���ڿ������ݳǣ��������˺��ϵĴ�ֻ��ʵ���١�
LONG
	);
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
void init()
{
	object me;
	string str;
	me=this_player();
	if(me->query_temp("yz_sz")==1)	{
		str="/d/suzhou/matou";
					}
	if(me->query_temp("yz_sz")==2)	{
		str="/d/suzhou/yunhe3";
					}
	call_out("yz_sz",5,str,me);
}
void yz_sz(string str,object me)
{
	me->move(str);
}
