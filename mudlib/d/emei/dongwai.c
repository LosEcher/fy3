// Room: /d/room/dongwai
inherit ROOM;

void create()
{
  set ("short", "�ɷ�ʯ");
  set ("long", @LONG
��ɽ������,��һ���ξ�ʯ�����ڵ���,��10��,��17��.ʯ�Ͽ���
���ʫ����Ң������'������������',��ʯ�ų��ɹ�ʯ.ʯ����������
�������������ʲô����������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"jiulaofe",
]));
set("outdoors","/d/emei");
  set("item_desc", ([ /* sizeof() == 1 */
  "����" : "ܷܷ������ɽ��,������Щ��ͷ��,��֪����(la)������ʲô����.
",
]));
  setup();
}
void init()
{
	add_action("do_la", "la");
}
int do_la(string arg)
{
    if(arg!="����") return 0; 
    message_vision("$N��������,����������ˤ�˽�ȥ��\n", this_player());
    this_player()->move(__DIR__"dongzhong"); 
    message_vision("$N�Ǳ������Ĵ�����ˤ�˽���,����մ������̦��\n", this_player());

    return 1;
}
