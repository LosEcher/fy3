// Room: /d/huanggon/dijiao.c

inherit ROOM;

void create()
{
	set("short", "ҩ�̵ؽ�");
	set("long", @LONG
����ʮ�༶̨��,�ƿ�һ�Ȱ���,���Ǹ�ʮ���߼�����С��,��������
���.���滹������Ѫ��.һյú�͵Ʒ�����Ƶĵƹ�,��������Ҷ�Ѭ��
���ϴ�һ��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xutianch.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"neishi1",
]));

	setup();
	replace_program(ROOM);
}
