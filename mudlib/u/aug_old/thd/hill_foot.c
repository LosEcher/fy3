// thd:hill_foot.c

inherit ROOM;

void create()
{
      set("short", "��ָ���");
	set("long", @LONG
���ǵ�ָ���ɽ�š���Ȼ��ָ��ʹ�½����ɽ�󴨱�����������̫��
�������⺣���Ͽ���ȷ����ĸߴ�Ρ�롣�ڴ��ϵ��������������
ʮ������ܿɼ�����ɽ�塣����ɽ���������˻�ҩʦ�۰�һ��������֮��
����׿Ȼ��Ⱥ��������ȡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 4 */
          "northup" : __DIR__"hill1",     
          "south" : __DIR__"nroad",     
          "southwest" : __DIR__"nbeach",          
          "southeast" : __DIR__"nebeach2",               
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

