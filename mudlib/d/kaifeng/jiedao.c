// Room: /d/kaifeng/jiedao.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����������ϱ������������ţ�������ӯ�ţ�����ǰ���ϳ�Ѳʱ
���ߵĵ��������޵��Ǹ���ƽ���������ߵ��̲��ϡ����Ϲ�ȥ��Զ����
�ǿ��⸮���á������Ǵ�����¡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"jiedao1",
  "north" : __DIR__"xianguosi",
]));
	set("outdoors", "/d/kaifeng");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/fujiazi.c" : 1,
  __DIR__"npc/qigai.c" : 1,
	"/npc/man3":2,
]));

	setup();
	replace_program(ROOM);
}
