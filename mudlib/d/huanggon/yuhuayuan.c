// Room: /d/huanggon/yuhuayuan.c

inherit ROOM;

void create()
{
	set("short", "����԰");
	set("long", @LONG
ֻ����ɽСͤ,���Ȼ���,���ѵ�һ�����滨���,�ڴ�ȴ���л�
Ұ��һ��,��Ŀ����,����ǽ��,���Ȱ���Щ���ԵĻ�ľ,����������֮��,
������ϸС������,ɺ��.�ϱ߾��Ǻ��󸻵ľӴ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"qianqinmen",
  "north" : __DIR__"shangshanjian",
  "south" : __DIR__"dawu",
]));

	setup();
	replace_program(ROOM);
}
