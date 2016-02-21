// Room: /d/hangzhou/shuangf.c

inherit ROOM;

void create()
{
	set("short", "˫�����");
	set("long", @LONG
����һ��С�ɵ�ͤ��,�ǹ�����������Ϣ��,�Ӵ˴�Զ��,�ɼ��� 
���������߷�,ңң���ţ��������ʮ���Ⱥɽ��������ʱ������ 
ʱ¶˫�⣬���������������ơ����ƻ�Ũ�򵭣��������ڣ������� 
ɽ��һƬ���ʡ� 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yanjing/npc/person.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"dadao2.c",
  "west" : __DIR__"dadao1.c",
  "north" : __DIR__"hongying",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
