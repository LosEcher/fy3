// Room: /d/jinling/chengmen3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ǿ������ţ��������Ʋ�̫�ȶ��������ⳣ����ɼ������̶���
����Ѫ�¼������Գ��ſڱ����ܶ࣬�Թ���֮���̲���ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shanglin3.c",
  "west" : __DIR__"shanglin4.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/weibing.c" : 4,
  __DIR__"npc/yinjiaweishi.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
