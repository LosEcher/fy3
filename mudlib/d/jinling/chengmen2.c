// Room: /d/jinling/chengmen2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ǿ��궫�ţ��������Ʋ�̫�ȶ��������ⳣ����ɼ������̶���
����Ѫ�¼������Գ��ſڱ����ܶ࣬�Թ���֮���̲���ϡ�
��
LONG
	);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shanglin8.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/weibing.c" : 4,
  __DIR__"npc/yinjiaweishi.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
