// Room: /d/new/huanhua/bamboo2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һƬ��������,��ɫ����Ҷ�һ�����¶ˮ,�������һ��,Ψ��
����������쳹�ּ�.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bamboo3",
  "west" : __DIR__"bamboo1",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
