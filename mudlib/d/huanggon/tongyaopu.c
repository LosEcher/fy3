// Room: /d/huanggon/tongyaopu.c

inherit ROOM;

void create()
{
	set("short", "�ش���ҩ��");
	set("long", @LONG
�ش���ҩ���ھ��Ǻ�������,��˵�˵ص�ҩ�Ļ�����.��һ��������
��һ��ŨŨ��ҩζ,���Ǵ�ҩ���ϵļ��ٸ�С������ɢ��������,������
������,�ò����ڵ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yenongyi.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"neishi1",
  "east" : __DIR__"xidan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
