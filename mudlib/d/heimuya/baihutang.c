// Room: /d/heimuya/baihutang.c

inherit ROOM;

void create()
{
	set("short", "�׻��ô���");
	set("long", @LONG
�˴������½̵ڶ�����-[�׻���],��ש�̵أ�����һ���ͻ�ͼ����������
���ߵı������ϰ����˸�������������������ɱ���򱱴����������Ǹ�������
������������������.
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/baihudizi.c" : 2,
  __DIR__"npc/shanggy" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"chitang",
  "north" : __DIR__"baistep2",
]));

	setup();
	replace_program(ROOM);
}
