// Room: /u/oldsix/room1/taihu_1.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
���˾�ţ����֮���������ڰѴ������˰��ߡ������ڴ���ЪϢЪϢ��һ��
��ͷ���˹�����ʹ�㲻�ò����¿��ǿ��ǡ�
LONG
	);
	set("exits",([
		"southup":"/d/suzhou/huan",
	]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
