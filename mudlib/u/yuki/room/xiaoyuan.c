// Room: /u/yuki/room/xiaoyuan.c

inherit ROOM;

void create()
{
	set("short", "СԺ");
	set("long", @LONG
����һ���������ǳ���ͨ��СС��Ժ�䣬Ժ�ӵ��м佨��һ��
С�ݣ�С��Ҳ����ͨ��������é��Ϊ����ש��Ϊǽ��Ժ����û��ʲ
ô���裬ֻ�м��Ѹ�ľ����ڽ����������ǲ��ˡ� 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaochaifang",
  "southwest" : "/d/meizhuang/chuangongfang3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
