// Room: /d/emei/gate.c

inherit ROOM;

void create()
{
	set("short", "���ƺ");
	set("long", @LONG
���ƺǰ,�Ű�ɭɭ,����ľ�ľ�εض���,ֱ������,����ȴ
�ܸɾ�,��Ȼ�������˴�ɨ,�򱱾��������ı�����,�Ա�����С
·,��֪ͨ��δ�.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/hui.c" : 1,
  __DIR__"npc/dao.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"baoenshi",
  "east" : __DIR__"huaying",
  "southup" : __DIR__"fenhuang",
]));

	setup();
	replace_program(ROOM);
}
