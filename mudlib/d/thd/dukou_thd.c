// thd:dukou_thd.c

inherit ROOM;

void go_back();

void create()
{
      set("short", "�һ�����ͷ");
	set("long", @LONG
�������һ�������ͷ�����һ������������ͨ���Ż�����ͷ��ͣ�Ų�
��С�������涼�������������ˮ�������֧�ֵ���·������������Ԥ
��ģ�һ����˭����Ԥ�ϻᷢ��ʲô���ء���ͷ�Ķ������һ���ޱߵĴ�
��������ʱ��Ȼ��˳���������е�Сè����������Ŭ���ͻ���һͷ����
����ãã���̺��Ŷ������أ�����Σ�հ�����ͷ���и�Сé����м�
����������Ϣ��
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/chuanfu1" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "east" : __DIR__"road1",
	]));
      
	set("outdoors", "thd");


	setup();
	replace_program(ROOM);
}

