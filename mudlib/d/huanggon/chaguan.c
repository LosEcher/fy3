// Room: /d/huanggon/chaguan.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
��һ�߽���,���ŵ�һ�ɲ���������Ƣ,����Ϊ֮һˬ.���Ű�����
һ���ſ�,�����˿���,�����̸Ц,��ͷ�Ӷ������ǰ���Ǹ�С��̨,
˵�����ͷ����ĭ�Ľ���˵'Ӣ�Ҵ�'.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liuwusheng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ndajie2",
]));

	setup();
	replace_program(ROOM);
}
