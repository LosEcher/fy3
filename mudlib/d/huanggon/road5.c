// Room: /d/huanggon/road5.c

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
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yongdingmen",
  "southeast" : __DIR__"road6",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/d/taishan/npc/seng-ren" : 1,
]));
	set("outdoors", "city2");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
