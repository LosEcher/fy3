// thd:seroad.c

inherit ROOM;

void create()
{
      set("short", "ʯ��·");
	set("long", @LONG
�������һ����Ķ����棬��Ҫ����������·һֱ�������߾Ϳ��Ե���
�һ���������Ҳ�����һ�������ҩʦ��ס����������ǰ��ǧ�����һ�����
һ�۾�Ҫͷ�Σ�����˵�����з�����ȷ�ĵ�·�ˡ���ʱ�����һ�ʢ����ʱ
�ڣ�ǧǧ������һ�������ǰҡ߮�ţ�����ͬǧǧ�����ۺ�ɫ���Ʋʡ�
���ۿ�����ʢ�����һ����������������˵Ļ��㣬һʱ����������Ƭ����
��Դ֮�У��ƺ��Ѿ���������ʵ��ʱ�ա�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu5" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "southwest" : __DIR__"sroad",
          "northeast" : __DIR__"eroad",
          "northwest" : __DIR__"steast",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

