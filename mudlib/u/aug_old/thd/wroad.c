// thd:wroad.c
// 97.7.13 by aug

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
֮�У��ƺ��Ѿ���������ʵ��ʱ�ա��и�����վ��·�ߴ�Խ����·�İɡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu1" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "east" : __DIR__"west",
          "west" : __DIR__"road1",
          "northeast" : __DIR__"nwroad",
          "southeast" : __DIR__"swroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

