// Room: /u/xxy/room/shuitan
inherit ROOM;

void create ()
{
  set ("short", "��ҺȪ");
  set ("long", @LONG
Ȫ�ӵص�ӵ��,ˮ��ζ��,������Һ.��ˮ���ɳ�,��Ϊ̫����,��
���д�ʯ����,ɽʯ�϶��ǹ�������ī�͵����.'���'���־�˵��
��������������.����һ��ʯ��(bei),�����ر�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wenhui.c" : 1,
]));
  set("outdoors", "/d/emei");
  set("item_desc", ([ /* sizeof() == 1 */
  "bei" : "��ˮͨ����,�Ͽ���ʫ����������ʫ.
ɽɮ�Դ�Ȫ,���뽭��ͨ.������˵��,��ŮΪ�ɿ�
��������ů,��ˮ�ɿ���.����������,��Դ˭����
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wanhegu",
]));

  setup();
}
void init()
{
	add_action("do_jump", "jump");
}

int do_jump(string arg)
{
    if(arg!="down") return 0;
 
    message_vision("$N�����,������ˮ��,������ü,���ű����������С�\n", this_player());
    this_player()->move(__DIR__"xixiang"); 

    return 1;
}
