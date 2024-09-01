* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
  font-family: 'Poppins', sans-serif;
}

.container {
  max-width: 800px;
  margin: 0 auto;
  padding: 20px;
}

h1 {
  text-align: center;
  font-size: 36px;
  color: #333;
  text-shadow: 2px 2px 6px rgb(167, 165, 165);
}

.search-bar {
  display: flex;
  align-items: center;
  justify-content: center;
  margin: 10px 0;
  
}

.search-bar input {
  width: 70%;
  height: 40px;
  border: 1px solid #ccc;
  border-radius: 5px;
  padding: 10px;
  font-size: 18px;
  outline: none;
  margin-right: 5px;
  box-shadow: 2px 2px 2px rgb(111, 109, 109);
}

.search-bar button {
  width: 15%;
  height: 40px;
  border: none;
  border-radius: 5px;
  background-color: #333;
  color: white;
  font-size: 18px;
  cursor: pointer;
  box-shadow: 2px 3px 8px rgb(95, 93, 93);
}
.search-bar button:hover{
  transform: scale(1.1);
  box-shadow: 2px 3px 8px rgb(121, 119, 119);
}
.category-filter {
  display: flex;
  align-items: center;
  justify-content: center;
  margin: 10px 0;
  outline: none;
  cursor: pointer;
  
  
}

.category-filter select {
  width: 30%;
  height: 40px;
  border: 1px solid #ccc;
  border-radius: 5px;
  padding: 10px;
  font-size: 16px;
  box-shadow: rgba(0, 0, 0, 0.1) 0px 4px 3px;
  cursor: pointer;
  outline: none;
}



.news-container {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
  grid-gap: 20px;
  margin: 10px 0;
 
}

.news-article {
  border: 1px solid #ccc;
  border-radius: 5px;
  padding: 10px;
  overflow: hidden;
  box-shadow: rgba(99, 99, 99, 0.2) 0px 2px 8px 0px;
}

.news-article img {
  width: 100%;
  height: 200px;
  object-fit: cover;
}

.news-article h3 {
  font-size: 24px;
  color: #333;
  margin: 10px 0;
}

.news-article p {
  font-size: 18px;
  color: #333;
  margin: 10px 0;
}

.news-article a {
  display: block;
  text-align: right;
  font-size: 18px;
  color: #333;
  text-decoration: none;
}

.news-article a:hover {
  color: #666;
}

/* Dark mode styles */


