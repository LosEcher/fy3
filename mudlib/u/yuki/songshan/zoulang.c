// Room: /u/yuki/songshan/zoulang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
    ��ʥ����ߵ�һ�����ȣ�ͨ�����������޹������ȵ�·����һ��
�����Ĵ���ʯ�̳ɣ���ɨ��ʮ�ֽྻ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/songshan/chongsheng.c",
  "west" : __DIR__"zoulang1",
]));

	setup();
	replace_program(ROOM);
}
