// Room: /d/city2/road5.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵġ�
���̵ġ����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·��������·������
��������������֡����߾����������ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "city2");
	set("objects", ([ /* sizeof() == 1 */
  "/d/taishan/npc/seng-ren" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"road6",
  "north" : __DIR__"yongding",
]));

	setup();
	replace_program(ROOM);
}
