// Room: /d/xxy/datang 
inherit ROOM; 
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ������Ĵ���,����ķ�ǽ��������,�����ȴ�ǵ�ƽխ��. 
���Ű���ܶ�����,է��ʮ������,��ʵ��������?��ǽ��,���������� 
��̨,��̨��������������Ŀ�����������,��������.����ķ�ǽ��һ 
��ô������(sign),�����˴�ҵ�Ŀ��. 
LONG);

  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"yongdao2",
  "west" : __DIR__"yongdao",
  "north" : __DIR__"zoulang",
  "southdown" : __DIR__"fdian",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "        ����ס�޷���� 
            ���ȣ����[��]����ʿ�ƺţ�����Ժ�����¥�� 
            ���ȣ����[��]����ʿ�ƺţ���סԺ������¥; 
            ����: ���[��]����ʿ�ƺţ���סԺ��[��]������; 
            �ĵ�: ���[��]����ʿ�ƺţ���סԺ��[��]������; 
            ���:�����ܻ����ʿ�ƺ��ߣ����ڱ��궫�������Ϣ; 
 ע:�뵽�������������.
",
]));
  set("objects", ([ /* sizeof() == 2 */
//	  "/d/jinding/obj/pot.c" : 1,
  __DIR__"npc/dazhanggui.c" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   ob=present("pai",me);
   if (!ob&&dir=="north")
         return notify_fail("���ƹ�һ����ס"+me->name()+",ָ��ָǽ�ϵ�����!\n");
   else 
  return ::valid_leave(me,dir);
}
