// Room: /d/huanggon/quanjude.c

inherit ROOM;

void create()
{
	set("short", "ȫ�۵¾�¥");
	set("long", @LONG
ȫ�۵¾�¥�ڷ�Բ������֮�ڿɳƵ������˲�֪,�����Ǹõ�Ŀ�Ѽ
���Ǿ���һ��,����װ�εü���,��ʮֻ���õ�Ѽ�ӻ����µ�������.��
�߾������������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jingqianlin.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wangfujing",
]));

	setup();
	replace_program(ROOM);
}
