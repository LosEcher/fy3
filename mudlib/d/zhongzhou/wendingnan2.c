// Room: /d/zhongzhou/wendingnan2.c

inherit ROOM;

void create()
{
	set("short", "�Ķ��Ͻ�");
	set("long", @LONG
�������ݳ��Ķ��Ͻ֣����Ľֵ������˲�������һ�����ֶ������
��һ�Ҳ�¥���ɽ��������㿴���ܾ����е㲻�Ծ���
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/xiashi" : 1,
  __DIR__"npc/qiying" : 1,
]));
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"maodun",
  "north" : __DIR__"wendingnan1",
  "west" : __DIR__"chalou",
  "south" : __DIR__"wendingnan3",
]));
	set("outdoors", "/u/wen");

	setup();
	replace_program(ROOM);
}
