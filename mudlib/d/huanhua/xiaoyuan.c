// Room: /d/new/huanhua/xiaoyuan.c

inherit ROOM;

void create()
{
	set("short", "СԺ��");
	set("long", @LONG
Ժ�Ӻ�С,����Ͱ��ĵ���ɫΧǽ��һ԰�Ĵ�ɫΧ������.һ��С���ڻ�
ľ����������������һ����¥.���������Ժ����һ���ߴ�ļ�ɽ,��ȥ
����Щ����.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qiubo.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu3",
  "west" : __DIR__"path1",
]));

	setup();
	replace_program(ROOM);
}
