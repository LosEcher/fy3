// Room: /d/quanzhou/wuliqiao.c

inherit ROOM;

void create()
{
	set("short", "��ƽ��");
	set("long", @LONG
����ǵ�����ĺ��۴�ʯ��'��ƽ��',ȫ�ų�2255��,��3-3.8��
�������̵Ķ��Ǵ�ʯ��,�����ж�ʮ����,�صĴ�25��,������ͤ������.
��ͤ���������ޱ���ʮ����,ʯ����ʿ����,ͤ���ϻ���һ������(duilian).
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/youke.c" : 1,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "duilian" : "           �����з���˹��
               �������ų�����.
",
]));
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"haigang",
  "northwest" : __DIR__"dalu3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
