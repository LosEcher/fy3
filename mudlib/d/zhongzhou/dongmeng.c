// Room: /d/zhongzhou/dongmeng.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���������ݵĶ����š�������һ����������ö���ص����ݵ��˶�
����������ݳǣ��ٸ���������ؿ����ʹ������ˡ�һ�����Ʋ��ȵ�ʱ
��������ر�Ľ��š�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/sandboy/to_zhongzhou",
  "west" : __DIR__"yanlingdong2",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}
