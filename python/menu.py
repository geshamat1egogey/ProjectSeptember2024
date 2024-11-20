import lab_package.lab1 as lab1

def main():
    while True:
        print("Меню")
        print("0 - Выйти")
        print("1 - Выполнить первую ЛР")
        
        choice = input("Сделайте выбор: ")
        if choice == '0':
            print("Выход из программы.")
            break
        elif choice == '1':
            lab1.run()
        else:
            print("Неверный выбор. Пожалуйста, попробуйте снова.")

if __name__ == "__main__":
    main()
