// Room: /d/quanzhou/sibosi.c

inherit ROOM;

void create()
{
	set("short", "�в�˾");
	set("long", @LONG
�в�˾��ר��Ϊ�Ӵ�������صĿ��˶����,�������Ϲ��Ĺ�����ʹ,
��������Ŀ���,�������ڴ˵��ܵ��д�,��������վ�ĵط��Ǵ���,�Ա���
���ۿ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tingtang",
  "east" : __DIR__"nstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chaiyi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
