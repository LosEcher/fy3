// Room: /d/baituo/lvzhou.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����ɳĮ�е�һС���̵أ��������߾�Ҫ�����Į�ˣ���
�����������ȵ�ˮ���¿ʡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shamo1",
  "east" : __DIR__"sl1",
]));

	setup();
	replace_program(ROOM);
}
