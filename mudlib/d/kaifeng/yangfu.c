// Room: /d/kaifeng/yangfu.c

inherit ROOM;

void create()
{
	set("short", "�첨�︮");
	set("long", @LONG
�첨�︮�ǿ���������ҵ�ĸ�ۡ,�Դ���ҵȥ��֮�󣬸���ֻʣ��
һЩŮ�Ӿ�ס����ǰ�����������ԣ������ʯ�⻬�쳣�����ǵ�������.
�Ĺٹ������ţ���ٹ�������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road3",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
