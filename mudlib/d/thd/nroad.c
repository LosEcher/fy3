// thd:nroad.c

inherit ROOM;

void create()
{
      set("short", "ʯ��·");
	set("long", @LONG
�������һ����ı��棬��Ҫ����������·һֱ�����߾Ϳ��Ե����һ�
��������Ҳ�����һ�������ҩʦ��ס����������ǰ��ǧ�����һ�����һ��
��Ҫͷ�Σ�����˵�����з�����ȷ�ĵ�·�ˡ���ʱ�����һ�ʢ����ʱ�ڣ�
ǧǧ������һ�������ǰҡ߮�ţ�����ͬǧǧ�����ۺ�ɫ���Ʋʡ�����
������ʢ�����һ����������������˵Ļ��㣬һʱ����������Ƭ������Դ
֮�У��ƺ��Ѿ���������ʵ��ʱ�ա���ʯ��·�ı�����һ������ͦ�ε�ɽ
�塣
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/ya_pu1" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "south" : __DIR__"north",
          "north" : __DIR__"hill_foot",
          "southwest" : __DIR__"nwroad",
          "southeast" : __DIR__"neroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

