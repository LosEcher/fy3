// Room: /d/kaifeng/zhulin1.c

inherit ROOM;

void create()
{
	set("short", "ؤ�￪��ֶ�");
	set("long", @LONG
���߽������е�Сé��,������һ��,��é�ݽ�����é�ݸ���,�ı�
��ǽ������һ������ë�������¶��ɵ�,���е�����Ҳ���Ǵ�������,
���Ϸŵ�һֻ�����������������ɵ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/peng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"zhulin",
]));

	setup();
	replace_program(ROOM);
}
