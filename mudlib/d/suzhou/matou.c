// Room: /d/suzhou/matou.c

inherit ROOM;

void create()
{
	set("short", "��ͷ");
	set("long", @LONG
��ͷ���������£����ַǳ���������׳�İ��˹���æ������˶����ӻ���
С�����յ��˵ص�����͡�׼��ȥ���ݴ��յ������ˡ�����æ�Ļ��������ϴ�
������������ʪ͸��Ҳ��֪�Ǻ�ˮ��ʪ���Ǻ�ˮ��ʪ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"up" :__DIR__"wumenqiao",
]));
	set("objects",([
		__DIR__"npc/chuanlaoda" :1,
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
void init()
{
	object me;
	me=this_player();
	me->set_temp("yz_sz",0);
}
