// Room: /d/new/huanhua/zhengmei.c

inherit ROOM;

void create()
{
	set("short", "��ü��");
	set("long", @LONG
�⡰��ü��ԭ��������¥���¡����顢�������ﻮ֮��,�������, 
��ֻ��һ����ɫС¥��ͨ���ϲ�. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"path4.c",
  "up" : __DIR__"upzhengmei",
]));

	setup();
	replace_program(ROOM);
}
