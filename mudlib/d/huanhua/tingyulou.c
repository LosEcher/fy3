// Room: /d/new/huanhua/tingyulou.c

inherit ROOM;

void create()
{
	set("short", "����¥��¥");
	set("long", @LONG
����¥ȡ����[С¥һҹ������],������¥ƽʱ��Ϣ֮��.¥������, 
ȴ�ǽ�®����ߵ�һ������.����ĳ�����������Ժ�ڵ�һ��.�߸ߵ���ľ 
������˸���Ŷ�,���е������ϰ���һ������. 
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhuxiawu.c" : 1,
  __DIR__"npc/xxilou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"tingyu",
]));

	setup();
set("valid_startroom",1);
	replace_program(ROOM);
}
