// Room: /u/yuki/songshan/qingong.c

inherit ROOM;

void create()
{
	set("short", "�޹�");
	set("long", @LONG
    �������ķ��˾�ס���������ƽϲ���ྻ����࣬����������
��ûʲô�����İ��裬���мҾ߶��ܼ򵥡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"chufang",
]));
        set("objects", ([
                __DIR__"npc/furen" :1,
        ]));


	setup();
	replace_program(ROOM);
}
