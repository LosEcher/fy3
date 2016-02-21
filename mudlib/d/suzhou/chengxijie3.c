// Room: /d/suzhou/chengxijie3.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��һ�����ֵĽֵ������������������ˡ����ӻ���С�������ʽ���յ����ˡ�
ǰ�������·�ˡ�͵�������ĵ�Ʀ�����Ǽ����¸�ʽ�������������Ժ���
��ʱ���ֳ����������ã������պ�����仰��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "suzhou");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"chengxijie2",
  "south" : __DIR__"gongyuan",
  "east" : __DIR__"chengzhong",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wantong" : 1,
]));

	setup();
	replace_program(ROOM);
}
