// thd:neroad.c

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
��Դ֮�У��ƺ��Ѿ���������ʵ��ʱ�ա�������һƬ��̲��
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu4" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "northeast" : __DIR__"nebeach1",
          "southeast" : __DIR__"eroad",
          "northwest" : __DIR__"nroad",
          "southwest" : __DIR__"nteast",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

