// thd:sroad.c

inherit ROOM;

void create()
{
      set("short", "ʯ��·");
	set("long", @LONG
�������һ��������棬��Ҫ����������·һֱ�����߾Ϳ��Ե����һ�
��������Ҳ�����һ�������ҩʦ��ס����������ǰ��ǧ�����һ�����һ��
��Ҫͷ�Σ�����˵�����з�����ȷ�ĵ�·�ˡ���ʱ�����һ�ʢ����ʱ�ڣ�
ǧǧ������һ�������ǰҡ߮�ţ�����ͬǧǧ�����ۺ�ɫ���Ʋʡ�����
������ʢ�����һ����������������˵Ļ��㣬һʱ����������Ƭ������Դ
֮�У��ƺ��Ѿ���������ʵ��ʱ�ա���ʯ��·�Ķ�������һ��Ƭ���̵���
�֡�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/ya_pu1" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "north" : __DIR__"south",
          "southeast" : __DIR__"forest_start",
          "northwest" : __DIR__"swroad",
          "northeast" : __DIR__"seroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

