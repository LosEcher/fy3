// thd:eroad.c

inherit ROOM;

void create()
{
      set("short", "ʯ��·");
	set("long", @LONG
�������һ����Ķ��棬��Ҫ����������·һֱ�����߾Ϳ��Ե����һ�
��������Ҳ�����һ�������ҩʦ��ס����������ǰ��ǧ�����һ�����һ��
��Ҫͷ�Σ�����˵�����з�����ȷ�ĵ�·�ˡ���ʱ�����һ�ʢ����ʱ�ڣ�
ǧǧ������һ�������ǰҡ߮�ţ�����ͬǧǧ�����ۺ�ɫ���Ʋʡ�����
������ʢ�����һ����������������˵Ļ��㣬һʱ����������Ƭ������Դ
֮�У��ƺ��Ѿ���������ʵ��ʱ�ա���ʯ��·�Ķ�����һ�����ɵ�ͤ�ӡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu3" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"east",
          "east" : __DIR__"front_testsword",
          "northwest" : __DIR__"neroad",
          "southwest" : __DIR__"seroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

