// Room: /d/zhongzhou/inpomiao.c

inherit ROOM;

void create()
{
	set("short", "ؤ�����ݷֶ�");
	set("long", @LONG
���������ɢ����һЩ���ݺ����ޱ������е��������ѱ��˰��ߣ���
��һ��л���ռ�˵ط�����ֻ���߹�ɢ�������и�����ԭ����ʢ��ˮ�ġ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/jian.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"guandimiao",
]));

	setup();
	replace_program(ROOM);
}
