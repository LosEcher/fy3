// Room: /d/new/tianxia/danger10.c

inherit ROOM;

void create()
{
	set("short", "ʯ����");
	set("long", @LONG
����ͨ�����ۻ���.խ�������ܲ������,��������ʮ����.�ƺ���
Ȼ����,Ȼ���������಻�ϵĸ���ʯ��ȴ������,��������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room10",
  "eastup" : __DIR__"incave5",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
