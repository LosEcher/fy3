// Room: /d/kaifeng/fangsheng.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������̨�����¾��Ǵ���ˡ�̨��������һ��С���ӣ������ð�ʯ
Χ�������ˡ����ߵĳر��ϡ������ء�������Ϳ���˺�ɫ�����ڳص�
һ�߿����ֵ���������������ƾ٣���������˰�������ȥ���ܲ�
��Ӱ�����Ǹ�������Ƥ����������������ҹ�ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"qianshou",
  "westdown" : __DIR__"wroad",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
