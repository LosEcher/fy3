// Room: /d/dali/inpengfu.c

inherit ROOM;

void create()
{
	set("short", "ؤ�����ֶ�");
	set("long", @LONG
�����Ǹ���Ժ��,�����������øߴ����ͩ��,Ժ��Ҳ����������.
�����濴,��Ȼ���кܶ෿��,������Χ����Ժ�е�ˮ����,���ű���
����֦,������ʲô.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/liang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"pengfu",
]));
	set("outdoors", "/d/dali");

	setup();
	replace_program(ROOM);
}
