// Room: /d/kaifeng/yushi.c

inherit ROOM;

void create()
{
	set("short", "ԡ��");
	set("long", @LONG
ÿ������³����գ����ж�������ˮ��ϴ��Щ���񡣳�Ϊ��ϴ�𡻡�
��ϴ��Ĳ�ˮ���˵�ͷ��������£�����������Ȼˮ���࣬�����
����������ˮ����Ȼ��ٹ����ǲ��ᵱ���Ǳ��ģ������������ר��
��Сԡ�ҹ�����ʹ�á�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangzao.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"zhongyuan",
  "west" : __DIR__"yushi2",
]));

	setup();
	replace_program(ROOM);
}
