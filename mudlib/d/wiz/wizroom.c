// music.   wiz's ��ʦ�ǵĻ����

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ʦ�ǵĻ����");
  set ("long", @LONG
	�������ʦ�ǵĻ�ʹ��������ڲ��÷ǳ�����ȴ�ܵ��塣
ӭ����һ�������Ĳ�������͸�����Ȳ��������Ը������ݳǵ�ȫò��
����ͨ����ʦ�ǵĹ�����. ��ʦ��ͨ����æ�����׼������������⣬
���ڴ����ԣ����������ǣ�浽���ջ����Ѿ��а���˵������ʦ�Ǿ�
���ܾͲ����ش��ˡ�¥������ʦ�����ң���������������ˡ�
	������ɳ��������һλƯ��С�㣬�������������µľ�������
---- ��ݺݺ. �������������Щ��ʦ�ǵĽ�����

LONG
);

//  set("item_desc", ([ /* sizeof() == 2 */
//  "south" : (: look_door,     "south" :),
//  "door" : (: look_door,     "south" :),
//                   ]));
  set("exits", ([ 
  "up"    : "/d/wiz/meeting",
  "down"  : "/d/yangzhou/mingyue2",

]));
  set("no_fight", "1");

  set("objects", ([ 
                     __DIR__"npc/yingying" : 1,
                 ]));

  set("no_magic", 1);
  set("valid_startroom", 1);

  setup();
  call_other("/obj/board/guestboard","???");

}


int valid_leave(object me, string dir)
{
        if( dir=="up" && !wizardp(me) )
                return 
notify_fail("��ݺݺ���ε�ҡҡͷ: �汧Ǹ��ֻ����ʦ������ȥ��\n");
        return ::valid_leave(me, dir);
}

